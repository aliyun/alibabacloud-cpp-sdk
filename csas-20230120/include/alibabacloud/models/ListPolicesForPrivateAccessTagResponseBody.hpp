// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForPrivateAccessTagResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPolicesForPrivateAccessTagResponseBody() = default ;
    ListPolicesForPrivateAccessTagResponseBody(const ListPolicesForPrivateAccessTagResponseBody &) = default ;
    ListPolicesForPrivateAccessTagResponseBody(ListPolicesForPrivateAccessTagResponseBody &&) = default ;
    ListPolicesForPrivateAccessTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessTagResponseBody() = default ;
    ListPolicesForPrivateAccessTagResponseBody& operator=(const ListPolicesForPrivateAccessTagResponseBody &) = default ;
    ListPolicesForPrivateAccessTagResponseBody& operator=(ListPolicesForPrivateAccessTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tags_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicesForPrivateAccessTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPolicesForPrivateAccessTagResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPolicesForPrivateAccessTagResponseBodyTags>) };
    inline vector<ListPolicesForPrivateAccessTagResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListPolicesForPrivateAccessTagResponseBodyTags>) };
    inline ListPolicesForPrivateAccessTagResponseBody& setTags(const vector<ListPolicesForPrivateAccessTagResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPolicesForPrivateAccessTagResponseBody& setTags(vector<ListPolicesForPrivateAccessTagResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListPolicesForPrivateAccessTagResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

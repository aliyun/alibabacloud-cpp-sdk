// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsForPrivateAccessTagResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApplicationsForPrivateAccessTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListApplicationsForPrivateAccessTagResponseBody() = default ;
    ListApplicationsForPrivateAccessTagResponseBody(const ListApplicationsForPrivateAccessTagResponseBody &) = default ;
    ListApplicationsForPrivateAccessTagResponseBody(ListApplicationsForPrivateAccessTagResponseBody &&) = default ;
    ListApplicationsForPrivateAccessTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessTagResponseBody() = default ;
    ListApplicationsForPrivateAccessTagResponseBody& operator=(const ListApplicationsForPrivateAccessTagResponseBody &) = default ;
    ListApplicationsForPrivateAccessTagResponseBody& operator=(ListApplicationsForPrivateAccessTagResponseBody &&) = default ;
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
    inline ListApplicationsForPrivateAccessTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListApplicationsForPrivateAccessTagResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListApplicationsForPrivateAccessTagResponseBodyTags>) };
    inline vector<ListApplicationsForPrivateAccessTagResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListApplicationsForPrivateAccessTagResponseBodyTags>) };
    inline ListApplicationsForPrivateAccessTagResponseBody& setTags(const vector<ListApplicationsForPrivateAccessTagResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsForPrivateAccessTagResponseBody& setTags(vector<ListApplicationsForPrivateAccessTagResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListApplicationsForPrivateAccessTagResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

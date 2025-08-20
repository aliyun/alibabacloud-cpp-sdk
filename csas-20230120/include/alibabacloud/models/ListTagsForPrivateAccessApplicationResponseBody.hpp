// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsForPrivateAccessApplicationResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListTagsForPrivateAccessApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagsForPrivateAccessApplicationResponseBody() = default ;
    ListTagsForPrivateAccessApplicationResponseBody(const ListTagsForPrivateAccessApplicationResponseBody &) = default ;
    ListTagsForPrivateAccessApplicationResponseBody(ListTagsForPrivateAccessApplicationResponseBody &&) = default ;
    ListTagsForPrivateAccessApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessApplicationResponseBody() = default ;
    ListTagsForPrivateAccessApplicationResponseBody& operator=(const ListTagsForPrivateAccessApplicationResponseBody &) = default ;
    ListTagsForPrivateAccessApplicationResponseBody& operator=(ListTagsForPrivateAccessApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->requestId_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListTagsForPrivateAccessApplicationResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListTagsForPrivateAccessApplicationResponseBodyApplications>) };
    inline vector<ListTagsForPrivateAccessApplicationResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<ListTagsForPrivateAccessApplicationResponseBodyApplications>) };
    inline ListTagsForPrivateAccessApplicationResponseBody& setApplications(const vector<ListTagsForPrivateAccessApplicationResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListTagsForPrivateAccessApplicationResponseBody& setApplications(vector<ListTagsForPrivateAccessApplicationResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsForPrivateAccessApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListTagsForPrivateAccessApplicationResponseBodyApplications>> applications_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

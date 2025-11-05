// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPASSOCIATEPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPASSOCIATEPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupAssociateProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupAssociateProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupAssociateProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectIdList, projectIdList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceGroupAssociateProjectsResponseBody() = default ;
    ListResourceGroupAssociateProjectsResponseBody(const ListResourceGroupAssociateProjectsResponseBody &) = default ;
    ListResourceGroupAssociateProjectsResponseBody(ListResourceGroupAssociateProjectsResponseBody &&) = default ;
    ListResourceGroupAssociateProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupAssociateProjectsResponseBody() = default ;
    ListResourceGroupAssociateProjectsResponseBody& operator=(const ListResourceGroupAssociateProjectsResponseBody &) = default ;
    ListResourceGroupAssociateProjectsResponseBody& operator=(ListResourceGroupAssociateProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectIdList_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // projectIdList Field Functions 
    bool hasProjectIdList() const { return this->projectIdList_ != nullptr;};
    void deleteProjectIdList() { this->projectIdList_ = nullptr;};
    inline const vector<int64_t> & projectIdList() const { DARABONBA_PTR_GET_CONST(projectIdList_, vector<int64_t>) };
    inline vector<int64_t> projectIdList() { DARABONBA_PTR_GET(projectIdList_, vector<int64_t>) };
    inline ListResourceGroupAssociateProjectsResponseBody& setProjectIdList(const vector<int64_t> & projectIdList) { DARABONBA_PTR_SET_VALUE(projectIdList_, projectIdList) };
    inline ListResourceGroupAssociateProjectsResponseBody& setProjectIdList(vector<int64_t> && projectIdList) { DARABONBA_PTR_SET_RVALUE(projectIdList_, projectIdList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupAssociateProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceGroupAssociateProjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of workspace IDs.
    std::shared_ptr<vector<int64_t>> projectIdList_ = nullptr;
    // The request ID. You can use this ID to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

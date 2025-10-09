// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSINESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBUSINESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetBusinessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusinessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusinessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
    };
    GetBusinessRequest() = default ;
    GetBusinessRequest(const GetBusinessRequest &) = default ;
    GetBusinessRequest(GetBusinessRequest &&) = default ;
    GetBusinessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusinessRequest() = default ;
    GetBusinessRequest& operator=(const GetBusinessRequest &) = default ;
    GetBusinessRequest& operator=(GetBusinessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessId_ != nullptr
        && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetBusinessRequest& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBusinessRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetBusinessRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

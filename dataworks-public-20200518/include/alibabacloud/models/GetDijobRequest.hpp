// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(WithDetails, withDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(WithDetails, withDetails_);
    };
    GetDIJobRequest() = default ;
    GetDIJobRequest(const GetDIJobRequest &) = default ;
    GetDIJobRequest(GetDIJobRequest &&) = default ;
    GetDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobRequest() = default ;
    GetDIJobRequest& operator=(const GetDIJobRequest &) = default ;
    GetDIJobRequest& operator=(GetDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->withDetails_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline GetDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // withDetails Field Functions 
    bool hasWithDetails() const { return this->withDetails_ != nullptr;};
    void deleteWithDetails() { this->withDetails_ = nullptr;};
    inline bool withDetails() const { DARABONBA_PTR_GET_DEFAULT(withDetails_, false) };
    inline GetDIJobRequest& setWithDetails(bool withDetails) { DARABONBA_PTR_SET_VALUE(withDetails_, withDetails) };


  protected:
    // The ID of the synchronization task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // Specifies whether to return detailed configuration information, including TransformationRules, TableMappings, and JobSettings. Valid values: true and false. Default value: true.
    std::shared_ptr<bool> withDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

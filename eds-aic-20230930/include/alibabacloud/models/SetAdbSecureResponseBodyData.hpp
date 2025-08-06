// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETADBSECURERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SETADBSECURERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class SetAdbSecureResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAdbSecureResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SetAdbSecureResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SetAdbSecureResponseBodyData() = default ;
    SetAdbSecureResponseBodyData(const SetAdbSecureResponseBodyData &) = default ;
    SetAdbSecureResponseBodyData(SetAdbSecureResponseBodyData &&) = default ;
    SetAdbSecureResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAdbSecureResponseBodyData() = default ;
    SetAdbSecureResponseBodyData& operator=(const SetAdbSecureResponseBodyData &) = default ;
    SetAdbSecureResponseBodyData& operator=(SetAdbSecureResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCount_ != nullptr
        && this->instanceIds_ != nullptr && this->totalCount_ != nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline SetAdbSecureResponseBodyData& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline SetAdbSecureResponseBodyData& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline SetAdbSecureResponseBodyData& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SetAdbSecureResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the cloud phone instances for which the ADB authentication feature failed to be enabled.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The IDs of the cloud phone instances for which the ADB authentication feature is enabled.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The total number of the cloud phone instances.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

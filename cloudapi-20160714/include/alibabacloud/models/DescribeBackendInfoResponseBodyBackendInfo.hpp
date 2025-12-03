// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendModels, backendModels_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendModels, backendModels_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
    };
    DescribeBackendInfoResponseBodyBackendInfo() = default ;
    DescribeBackendInfoResponseBodyBackendInfo(const DescribeBackendInfoResponseBodyBackendInfo &) = default ;
    DescribeBackendInfoResponseBodyBackendInfo(DescribeBackendInfoResponseBodyBackendInfo &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfo() = default ;
    DescribeBackendInfoResponseBodyBackendInfo& operator=(const DescribeBackendInfoResponseBodyBackendInfo &) = default ;
    DescribeBackendInfoResponseBodyBackendInfo& operator=(DescribeBackendInfoResponseBodyBackendInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendModels_ == nullptr && return this->backendName_ == nullptr && return this->backendType_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr
        && return this->modifiedTime_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendModels Field Functions 
    bool hasBackendModels() const { return this->backendModels_ != nullptr;};
    void deleteBackendModels() { this->backendModels_ = nullptr;};
    inline const vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels> & backendModels() const { DARABONBA_PTR_GET_CONST(backendModels_, vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels>) };
    inline vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels> backendModels() { DARABONBA_PTR_GET(backendModels_, vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels>) };
    inline DescribeBackendInfoResponseBodyBackendInfo& setBackendModels(const vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels> & backendModels) { DARABONBA_PTR_SET_VALUE(backendModels_, backendModels) };
    inline DescribeBackendInfoResponseBodyBackendInfo& setBackendModels(vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels> && backendModels) { DARABONBA_PTR_SET_RVALUE(backendModels_, backendModels) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
    // The configurations of the backend service in the environment.
    std::shared_ptr<vector<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModels>> backendModels_ = nullptr;
    // The name of the backend service.
    std::shared_ptr<string> backendName_ = nullptr;
    // The type of the backend service.
    std::shared_ptr<string> backendType_ = nullptr;
    // The time when the backend service was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the backend service.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the backend service was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

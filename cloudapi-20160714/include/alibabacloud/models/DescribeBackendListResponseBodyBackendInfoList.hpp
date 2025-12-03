// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDLISTRESPONSEBODYBACKENDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDLISTRESPONSEBODYBACKENDINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackendListResponseBodyBackendInfoListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendListResponseBodyBackendInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendListResponseBodyBackendInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendListResponseBodyBackendInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeBackendListResponseBodyBackendInfoList() = default ;
    DescribeBackendListResponseBodyBackendInfoList(const DescribeBackendListResponseBodyBackendInfoList &) = default ;
    DescribeBackendListResponseBodyBackendInfoList(DescribeBackendListResponseBodyBackendInfoList &&) = default ;
    DescribeBackendListResponseBodyBackendInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendListResponseBodyBackendInfoList() = default ;
    DescribeBackendListResponseBodyBackendInfoList& operator=(const DescribeBackendListResponseBodyBackendInfoList &) = default ;
    DescribeBackendListResponseBodyBackendInfoList& operator=(DescribeBackendListResponseBodyBackendInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendName_ == nullptr && return this->backendType_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->tags_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeBackendListResponseBodyBackendInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeBackendListResponseBodyBackendInfoListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeBackendListResponseBodyBackendInfoListTags>) };
    inline vector<Models::DescribeBackendListResponseBodyBackendInfoListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeBackendListResponseBodyBackendInfoListTags>) };
    inline DescribeBackendListResponseBodyBackendInfoList& setTags(const vector<Models::DescribeBackendListResponseBodyBackendInfoListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeBackendListResponseBodyBackendInfoList& setTags(vector<Models::DescribeBackendListResponseBodyBackendInfoListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
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
    // The list of tags.
    std::shared_ptr<vector<Models::DescribeBackendListResponseBodyBackendInfoListTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

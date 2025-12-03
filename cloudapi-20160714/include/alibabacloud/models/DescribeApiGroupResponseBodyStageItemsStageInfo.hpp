// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYSTAGEITEMSSTAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYSTAGEITEMSSTAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBodyStageItemsStageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBodyStageItemsStageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBodyStageItemsStageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeApiGroupResponseBodyStageItemsStageInfo() = default ;
    DescribeApiGroupResponseBodyStageItemsStageInfo(const DescribeApiGroupResponseBodyStageItemsStageInfo &) = default ;
    DescribeApiGroupResponseBodyStageItemsStageInfo(DescribeApiGroupResponseBodyStageItemsStageInfo &&) = default ;
    DescribeApiGroupResponseBodyStageItemsStageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBodyStageItemsStageInfo() = default ;
    DescribeApiGroupResponseBodyStageItemsStageInfo& operator=(const DescribeApiGroupResponseBodyStageItemsStageInfo &) = default ;
    DescribeApiGroupResponseBodyStageItemsStageInfo& operator=(DescribeApiGroupResponseBodyStageItemsStageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->stageId_ == nullptr && return this->stageName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiGroupResponseBodyStageItemsStageInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeApiGroupResponseBodyStageItemsStageInfo& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiGroupResponseBodyStageItemsStageInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The environment description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> stageId_ = nullptr;
    // The environment name.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

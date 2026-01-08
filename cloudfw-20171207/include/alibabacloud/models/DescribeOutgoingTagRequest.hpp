// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstType, dstType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstType, dstType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    DescribeOutgoingTagRequest() = default ;
    DescribeOutgoingTagRequest(const DescribeOutgoingTagRequest &) = default ;
    DescribeOutgoingTagRequest(DescribeOutgoingTagRequest &&) = default ;
    DescribeOutgoingTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingTagRequest() = default ;
    DescribeOutgoingTagRequest& operator=(const DescribeOutgoingTagRequest &) = default ;
    DescribeOutgoingTagRequest& operator=(DescribeOutgoingTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstType_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr && this->tagId_ == nullptr; };
    // dstType Field Functions 
    bool hasDstType() const { return this->dstType_ != nullptr;};
    void deleteDstType() { this->dstType_ = nullptr;};
    inline string getDstType() const { DARABONBA_PTR_GET_DEFAULT(dstType_, "") };
    inline DescribeOutgoingTagRequest& setDstType(string dstType) { DARABONBA_PTR_SET_VALUE(dstType_, dstType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingTagRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingTagRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeOutgoingTagRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingTagRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline DescribeOutgoingTagRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    shared_ptr<string> dstType_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> sourceIp_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

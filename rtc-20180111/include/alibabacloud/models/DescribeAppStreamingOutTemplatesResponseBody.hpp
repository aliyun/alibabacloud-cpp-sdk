// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSTREAMINGOUTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSTREAMINGOUTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppStreamingOutTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppStreamingOutTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppStreamingOutTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeAppStreamingOutTemplatesResponseBody() = default ;
    DescribeAppStreamingOutTemplatesResponseBody(const DescribeAppStreamingOutTemplatesResponseBody &) = default ;
    DescribeAppStreamingOutTemplatesResponseBody(DescribeAppStreamingOutTemplatesResponseBody &&) = default ;
    DescribeAppStreamingOutTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppStreamingOutTemplatesResponseBody() = default ;
    DescribeAppStreamingOutTemplatesResponseBody& operator=(const DescribeAppStreamingOutTemplatesResponseBody &) = default ;
    DescribeAppStreamingOutTemplatesResponseBody& operator=(DescribeAppStreamingOutTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
        DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Templates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // layoutIds Field Functions 
      bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
      void deleteLayoutIds() { this->layoutIds_ = nullptr;};
      inline const vector<string> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
      inline vector<string> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
      inline Templates& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
      inline Templates& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


      // mediaEncode Field Functions 
      bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
      void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
      inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
      inline Templates& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Templates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<string>> layoutIds_ {};
      shared_ptr<int32_t> mediaEncode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppStreamingOutTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeAppStreamingOutTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeAppStreamingOutTemplatesResponseBody::Templates>) };
    inline vector<DescribeAppStreamingOutTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeAppStreamingOutTemplatesResponseBody::Templates>) };
    inline DescribeAppStreamingOutTemplatesResponseBody& setTemplates(const vector<DescribeAppStreamingOutTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeAppStreamingOutTemplatesResponseBody& setTemplates(vector<DescribeAppStreamingOutTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeAppStreamingOutTemplatesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAppStreamingOutTemplatesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeAppStreamingOutTemplatesResponseBody::Templates>> templates_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif

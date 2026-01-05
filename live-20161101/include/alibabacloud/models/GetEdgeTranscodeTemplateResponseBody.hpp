// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEdgeTranscodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetEdgeTranscodeTemplateResponseBody() = default ;
    GetEdgeTranscodeTemplateResponseBody(const GetEdgeTranscodeTemplateResponseBody &) = default ;
    GetEdgeTranscodeTemplateResponseBody(GetEdgeTranscodeTemplateResponseBody &&) = default ;
    GetEdgeTranscodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTranscodeTemplateResponseBody() = default ;
    GetEdgeTranscodeTemplateResponseBody& operator=(const GetEdgeTranscodeTemplateResponseBody &) = default ;
    GetEdgeTranscodeTemplateResponseBody& operator=(GetEdgeTranscodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(Codec, codec_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(Gop, gop_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(Codec, codec_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(Gop, gop_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->codec_ == nullptr && this->createTime_ == nullptr && this->fps_ == nullptr && this->gop_ == nullptr && this->name_ == nullptr
        && this->resolution_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
      inline Template& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // codec Field Functions 
      bool hasCodec() const { return this->codec_ != nullptr;};
      void deleteCodec() { this->codec_ = nullptr;};
      inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
      inline Template& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Template& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
      inline Template& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // gop Field Functions 
      bool hasGop() const { return this->gop_ != nullptr;};
      void deleteGop() { this->gop_ = nullptr;};
      inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
      inline Template& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline Template& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Template& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The bitrate. If a numeric value is returned, a fixed bitrate is configured for the output stream. If ws is returned, the output stream maintains the same bitrate as the input stream.
      shared_ptr<string> bitrate_ {};
      // The video encoding format. Valid values:
      // 
      // *   H.264
      // *   H.265
      shared_ptr<string> codec_ {};
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // The frame rate. If a numeric value is returned, a fixed frame rate is configured for the output stream. If ws is returned, the output stream maintains the same frame rate as the input stream.
      shared_ptr<string> fps_ {};
      // The group of pictures (GOP) size. The GOP size can be defined by the number of frames or the time interval between I-frames. If ws is returned, the output stream maintains the same GOP size as the input stream.
      shared_ptr<string> gop_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The resolution. If width and height values are returned, a fixed resolution is configured for the output stream. If ws is returned, the output stream maintains the same resolution as the input stream.
      // 
      // >  If the width value is -1, the width of the output stream is adapted to the height. If the height value is -2, the height of the output stream is adapted to the width.
      shared_ptr<string> resolution_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The type of edge transcoding.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeTranscodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetEdgeTranscodeTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, GetEdgeTranscodeTemplateResponseBody::Template) };
    inline GetEdgeTranscodeTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, GetEdgeTranscodeTemplateResponseBody::Template) };
    inline GetEdgeTranscodeTemplateResponseBody& setTemplate(const GetEdgeTranscodeTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetEdgeTranscodeTemplateResponseBody& setTemplate(GetEdgeTranscodeTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the edge transcoding template.
    shared_ptr<GetEdgeTranscodeTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

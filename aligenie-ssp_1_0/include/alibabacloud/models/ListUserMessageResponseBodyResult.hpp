// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListUserMessageResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Pic, pic_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceUuid, sourceUuid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Pic, pic_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceUuid, sourceUuid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListUserMessageResponseBodyResult() = default ;
    ListUserMessageResponseBodyResult(const ListUserMessageResponseBodyResult &) = default ;
    ListUserMessageResponseBodyResult(ListUserMessageResponseBodyResult &&) = default ;
    ListUserMessageResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageResponseBodyResult() = default ;
    ListUserMessageResponseBodyResult& operator=(const ListUserMessageResponseBodyResult &) = default ;
    ListUserMessageResponseBodyResult& operator=(ListUserMessageResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->deviceName_ != nullptr && this->gmtCreate_ != nullptr && this->id_ != nullptr && this->pic_ != nullptr && this->source_ != nullptr
        && this->sourceUuid_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListUserMessageResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline ListUserMessageResponseBodyResult& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListUserMessageResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserMessageResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pic Field Functions 
    bool hasPic() const { return this->pic_ != nullptr;};
    void deletePic() { this->pic_ = nullptr;};
    inline string pic() const { DARABONBA_PTR_GET_DEFAULT(pic_, "") };
    inline ListUserMessageResponseBodyResult& setPic(string pic) { DARABONBA_PTR_SET_VALUE(pic_, pic) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListUserMessageResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUuid Field Functions 
    bool hasSourceUuid() const { return this->sourceUuid_ != nullptr;};
    void deleteSourceUuid() { this->sourceUuid_ = nullptr;};
    inline string sourceUuid() const { DARABONBA_PTR_GET_DEFAULT(sourceUuid_, "") };
    inline ListUserMessageResponseBodyResult& setSourceUuid(string sourceUuid) { DARABONBA_PTR_SET_VALUE(sourceUuid_, sourceUuid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListUserMessageResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUserMessageResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListUserMessageResponseBodyResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> pic_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceUuid_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

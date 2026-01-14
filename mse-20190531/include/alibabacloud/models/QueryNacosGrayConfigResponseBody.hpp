// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNACOSGRAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNACOSGRAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryNacosGrayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNacosGrayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNacosGrayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryNacosGrayConfigResponseBody() = default ;
    QueryNacosGrayConfigResponseBody(const QueryNacosGrayConfigResponseBody &) = default ;
    QueryNacosGrayConfigResponseBody(QueryNacosGrayConfigResponseBody &&) = default ;
    QueryNacosGrayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNacosGrayConfigResponseBody() = default ;
    QueryNacosGrayConfigResponseBody& operator=(const QueryNacosGrayConfigResponseBody &) = default ;
    QueryNacosGrayConfigResponseBody& operator=(QueryNacosGrayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(GrayRule, grayRule_);
        DARABONBA_PTR_TO_JSON(GrayRuleName, grayRuleName_);
        DARABONBA_PTR_TO_JSON(GrayRulePriority, grayRulePriority_);
        DARABONBA_PTR_TO_JSON(GrayType, grayType_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(GrayRule, grayRule_);
        DARABONBA_PTR_FROM_JSON(GrayRuleName, grayRuleName_);
        DARABONBA_PTR_FROM_JSON(GrayRulePriority, grayRulePriority_);
        DARABONBA_PTR_FROM_JSON(GrayType, grayType_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->content_ == nullptr && this->dataId_ == nullptr && this->grayRule_ == nullptr && this->grayRuleName_ == nullptr && this->grayRulePriority_ == nullptr
        && this->grayType_ == nullptr && this->group_ == nullptr && this->lastModified_ == nullptr && this->md5_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // grayRule Field Functions 
      bool hasGrayRule() const { return this->grayRule_ != nullptr;};
      void deleteGrayRule() { this->grayRule_ = nullptr;};
      inline string getGrayRule() const { DARABONBA_PTR_GET_DEFAULT(grayRule_, "") };
      inline Data& setGrayRule(string grayRule) { DARABONBA_PTR_SET_VALUE(grayRule_, grayRule) };


      // grayRuleName Field Functions 
      bool hasGrayRuleName() const { return this->grayRuleName_ != nullptr;};
      void deleteGrayRuleName() { this->grayRuleName_ = nullptr;};
      inline string getGrayRuleName() const { DARABONBA_PTR_GET_DEFAULT(grayRuleName_, "") };
      inline Data& setGrayRuleName(string grayRuleName) { DARABONBA_PTR_SET_VALUE(grayRuleName_, grayRuleName) };


      // grayRulePriority Field Functions 
      bool hasGrayRulePriority() const { return this->grayRulePriority_ != nullptr;};
      void deleteGrayRulePriority() { this->grayRulePriority_ = nullptr;};
      inline string getGrayRulePriority() const { DARABONBA_PTR_GET_DEFAULT(grayRulePriority_, "") };
      inline Data& setGrayRulePriority(string grayRulePriority) { DARABONBA_PTR_SET_VALUE(grayRulePriority_, grayRulePriority) };


      // grayType Field Functions 
      bool hasGrayType() const { return this->grayType_ != nullptr;};
      void deleteGrayType() { this->grayType_ = nullptr;};
      inline string getGrayType() const { DARABONBA_PTR_GET_DEFAULT(grayType_, "") };
      inline Data& setGrayType(string grayType) { DARABONBA_PTR_SET_VALUE(grayType_, grayType) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Data& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Data& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    protected:
      shared_ptr<string> appName_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> dataId_ {};
      shared_ptr<string> grayRule_ {};
      shared_ptr<string> grayRuleName_ {};
      shared_ptr<string> grayRulePriority_ {};
      shared_ptr<string> grayType_ {};
      shared_ptr<string> group_ {};
      shared_ptr<string> lastModified_ {};
      shared_ptr<string> md5_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryNacosGrayConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryNacosGrayConfigResponseBody::Data) };
    inline QueryNacosGrayConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryNacosGrayConfigResponseBody::Data) };
    inline QueryNacosGrayConfigResponseBody& setData(const QueryNacosGrayConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryNacosGrayConfigResponseBody& setData(QueryNacosGrayConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNacosGrayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryNacosGrayConfigResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

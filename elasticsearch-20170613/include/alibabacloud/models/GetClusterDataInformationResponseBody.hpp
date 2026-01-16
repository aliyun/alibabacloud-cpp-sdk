// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetClusterDataInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDataInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDataInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetClusterDataInformationResponseBody() = default ;
    GetClusterDataInformationResponseBody(const GetClusterDataInformationResponseBody &) = default ;
    GetClusterDataInformationResponseBody(GetClusterDataInformationResponseBody &&) = default ;
    GetClusterDataInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDataInformationResponseBody() = default ;
    GetClusterDataInformationResponseBody& operator=(const GetClusterDataInformationResponseBody &) = default ;
    GetClusterDataInformationResponseBody& operator=(GetClusterDataInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(connectable, connectable_);
        DARABONBA_PTR_TO_JSON(metaInfo, metaInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(connectable, connectable_);
        DARABONBA_PTR_FROM_JSON(metaInfo, metaInfo_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(fields, fields_);
          DARABONBA_PTR_TO_JSON(indices, indices_);
          DARABONBA_PTR_TO_JSON(mapping, mapping_);
          DARABONBA_PTR_TO_JSON(settings, settings_);
          DARABONBA_PTR_TO_JSON(typeName, typeName_);
        };
        friend void from_json(const Darabonba::Json& j, MetaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(fields, fields_);
          DARABONBA_PTR_FROM_JSON(indices, indices_);
          DARABONBA_PTR_FROM_JSON(mapping, mapping_);
          DARABONBA_PTR_FROM_JSON(settings, settings_);
          DARABONBA_PTR_FROM_JSON(typeName, typeName_);
        };
        MetaInfo() = default ;
        MetaInfo(const MetaInfo &) = default ;
        MetaInfo(MetaInfo &&) = default ;
        MetaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaInfo() = default ;
        MetaInfo& operator=(const MetaInfo &) = default ;
        MetaInfo& operator=(MetaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fields_ == nullptr
        && this->indices_ == nullptr && this->mapping_ == nullptr && this->settings_ == nullptr && this->typeName_ == nullptr; };
        // fields Field Functions 
        bool hasFields() const { return this->fields_ != nullptr;};
        void deleteFields() { this->fields_ = nullptr;};
        inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
        inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
        inline MetaInfo& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
        inline MetaInfo& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


        // indices Field Functions 
        bool hasIndices() const { return this->indices_ != nullptr;};
        void deleteIndices() { this->indices_ = nullptr;};
        inline const vector<string> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<string>) };
        inline vector<string> getIndices() { DARABONBA_PTR_GET(indices_, vector<string>) };
        inline MetaInfo& setIndices(const vector<string> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
        inline MetaInfo& setIndices(vector<string> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


        // mapping Field Functions 
        bool hasMapping() const { return this->mapping_ != nullptr;};
        void deleteMapping() { this->mapping_ = nullptr;};
        inline string getMapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
        inline MetaInfo& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


        // settings Field Functions 
        bool hasSettings() const { return this->settings_ != nullptr;};
        void deleteSettings() { this->settings_ = nullptr;};
        inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
        inline MetaInfo& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


        // typeName Field Functions 
        bool hasTypeName() const { return this->typeName_ != nullptr;};
        void deleteTypeName() { this->typeName_ = nullptr;};
        inline const vector<string> & getTypeName() const { DARABONBA_PTR_GET_CONST(typeName_, vector<string>) };
        inline vector<string> getTypeName() { DARABONBA_PTR_GET(typeName_, vector<string>) };
        inline MetaInfo& setTypeName(const vector<string> & typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };
        inline MetaInfo& setTypeName(vector<string> && typeName) { DARABONBA_PTR_SET_RVALUE(typeName_, typeName) };


      protected:
        // The fields in the Mapping for the index.
        shared_ptr<vector<string>> fields_ {};
        // The index list of the cluster.
        shared_ptr<vector<string>> indices_ {};
        // The Mapping configuration of the cluster.
        shared_ptr<string> mapping_ {};
        // The Settings of the cluster.
        shared_ptr<string> settings_ {};
        // Specifies the type of the index.
        shared_ptr<vector<string>> typeName_ {};
      };

      virtual bool empty() const override { return this->connectable_ == nullptr
        && this->metaInfo_ == nullptr; };
      // connectable Field Functions 
      bool hasConnectable() const { return this->connectable_ != nullptr;};
      void deleteConnectable() { this->connectable_ = nullptr;};
      inline bool getConnectable() const { DARABONBA_PTR_GET_DEFAULT(connectable_, false) };
      inline Result& setConnectable(bool connectable) { DARABONBA_PTR_SET_VALUE(connectable_, connectable) };


      // metaInfo Field Functions 
      bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
      void deleteMetaInfo() { this->metaInfo_ = nullptr;};
      inline const Result::MetaInfo & getMetaInfo() const { DARABONBA_PTR_GET_CONST(metaInfo_, Result::MetaInfo) };
      inline Result::MetaInfo getMetaInfo() { DARABONBA_PTR_GET(metaInfo_, Result::MetaInfo) };
      inline Result& setMetaInfo(const Result::MetaInfo & metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };
      inline Result& setMetaInfo(Result::MetaInfo && metaInfo) { DARABONBA_PTR_SET_RVALUE(metaInfo_, metaInfo) };


    protected:
      // Whether it is connectable.
      shared_ptr<bool> connectable_ {};
      // The metadata of the cluster.
      shared_ptr<Result::MetaInfo> metaInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterDataInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetClusterDataInformationResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetClusterDataInformationResponseBody::Result) };
    inline GetClusterDataInformationResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetClusterDataInformationResponseBody::Result) };
    inline GetClusterDataInformationResponseBody& setResult(const GetClusterDataInformationResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetClusterDataInformationResponseBody& setResult(GetClusterDataInformationResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<GetClusterDataInformationResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

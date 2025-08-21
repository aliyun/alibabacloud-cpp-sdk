// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODYRESULTMETAINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDATAINFORMATIONRESPONSEBODYRESULTMETAINFO_HPP_
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
  class GetClusterDataInformationResponseBodyResultMetaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDataInformationResponseBodyResultMetaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(indices, indices_);
      DARABONBA_PTR_TO_JSON(mapping, mapping_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(typeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDataInformationResponseBodyResultMetaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(indices, indices_);
      DARABONBA_PTR_FROM_JSON(mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(typeName, typeName_);
    };
    GetClusterDataInformationResponseBodyResultMetaInfo() = default ;
    GetClusterDataInformationResponseBodyResultMetaInfo(const GetClusterDataInformationResponseBodyResultMetaInfo &) = default ;
    GetClusterDataInformationResponseBodyResultMetaInfo(GetClusterDataInformationResponseBodyResultMetaInfo &&) = default ;
    GetClusterDataInformationResponseBodyResultMetaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDataInformationResponseBodyResultMetaInfo() = default ;
    GetClusterDataInformationResponseBodyResultMetaInfo& operator=(const GetClusterDataInformationResponseBodyResultMetaInfo &) = default ;
    GetClusterDataInformationResponseBodyResultMetaInfo& operator=(GetClusterDataInformationResponseBodyResultMetaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->indices_ != nullptr && this->mapping_ != nullptr && this->settings_ != nullptr && this->typeName_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<string> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<string>) };
    inline vector<string> indices() { DARABONBA_PTR_GET(indices_, vector<string>) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setIndices(const vector<string> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setIndices(vector<string> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline string mapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline const vector<string> & _typeName() const { DARABONBA_PTR_GET_CONST(typeName_, vector<string>) };
    inline vector<string> _typeName() { DARABONBA_PTR_GET(typeName_, vector<string>) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setTypeName(const vector<string> & _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };
    inline GetClusterDataInformationResponseBodyResultMetaInfo& setTypeName(vector<string> && _typeName) { DARABONBA_PTR_SET_RVALUE(typeName_, _typeName) };


  protected:
    // The fields in the Mapping for the index.
    std::shared_ptr<vector<string>> fields_ = nullptr;
    // The index list of the cluster.
    std::shared_ptr<vector<string>> indices_ = nullptr;
    // The Mapping configuration of the cluster.
    std::shared_ptr<string> mapping_ = nullptr;
    // The Settings of the cluster.
    std::shared_ptr<string> settings_ = nullptr;
    // Specifies the type of the index.
    std::shared_ptr<vector<string>> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

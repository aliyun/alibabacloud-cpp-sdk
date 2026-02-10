// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaDatas, metaDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaDatas, metaDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataSourceResponseBody() = default ;
    DescribeDataSourceResponseBody(const DescribeDataSourceResponseBody &) = default ;
    DescribeDataSourceResponseBody(DescribeDataSourceResponseBody &&) = default ;
    DescribeDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceResponseBody() = default ;
    DescribeDataSourceResponseBody& operator=(const DescribeDataSourceResponseBody &) = default ;
    DescribeDataSourceResponseBody& operator=(DescribeDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetaDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaDatas& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MetaDataFields, metaDataFields_);
      };
      friend void from_json(const Darabonba::Json& j, MetaDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MetaDataFields, metaDataFields_);
      };
      MetaDatas() = default ;
      MetaDatas(const MetaDatas &) = default ;
      MetaDatas(MetaDatas &&) = default ;
      MetaDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaDatas() = default ;
      MetaDatas& operator=(const MetaDatas &) = default ;
      MetaDatas& operator=(MetaDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetaDataFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaDataFields& obj) { 
          DARABONBA_PTR_TO_JSON(Filed, filed_);
          DARABONBA_PTR_TO_JSON(FiledName, filedName_);
          DARABONBA_PTR_TO_JSON(OperatorList, operatorList_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, MetaDataFields& obj) { 
          DARABONBA_PTR_FROM_JSON(Filed, filed_);
          DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
          DARABONBA_PTR_FROM_JSON(OperatorList, operatorList_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        MetaDataFields() = default ;
        MetaDataFields(const MetaDataFields &) = default ;
        MetaDataFields(MetaDataFields &&) = default ;
        MetaDataFields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaDataFields() = default ;
        MetaDataFields& operator=(const MetaDataFields &) = default ;
        MetaDataFields& operator=(MetaDataFields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OperatorList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperatorList& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, OperatorList& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          OperatorList() = default ;
          OperatorList(const OperatorList &) = default ;
          OperatorList(OperatorList &&) = default ;
          OperatorList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperatorList() = default ;
          OperatorList& operator=(const OperatorList &) = default ;
          OperatorList& operator=(OperatorList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline OperatorList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline OperatorList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The description of the operator.
          shared_ptr<string> description_ {};
          // The name of the operator.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->filed_ == nullptr
        && this->filedName_ == nullptr && this->operatorList_ == nullptr && this->sample_ == nullptr && this->valueType_ == nullptr; };
        // filed Field Functions 
        bool hasFiled() const { return this->filed_ != nullptr;};
        void deleteFiled() { this->filed_ = nullptr;};
        inline string getFiled() const { DARABONBA_PTR_GET_DEFAULT(filed_, "") };
        inline MetaDataFields& setFiled(string filed) { DARABONBA_PTR_SET_VALUE(filed_, filed) };


        // filedName Field Functions 
        bool hasFiledName() const { return this->filedName_ != nullptr;};
        void deleteFiledName() { this->filedName_ = nullptr;};
        inline string getFiledName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
        inline MetaDataFields& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


        // operatorList Field Functions 
        bool hasOperatorList() const { return this->operatorList_ != nullptr;};
        void deleteOperatorList() { this->operatorList_ = nullptr;};
        inline const vector<MetaDataFields::OperatorList> & getOperatorList() const { DARABONBA_PTR_GET_CONST(operatorList_, vector<MetaDataFields::OperatorList>) };
        inline vector<MetaDataFields::OperatorList> getOperatorList() { DARABONBA_PTR_GET(operatorList_, vector<MetaDataFields::OperatorList>) };
        inline MetaDataFields& setOperatorList(const vector<MetaDataFields::OperatorList> & operatorList) { DARABONBA_PTR_SET_VALUE(operatorList_, operatorList) };
        inline MetaDataFields& setOperatorList(vector<MetaDataFields::OperatorList> && operatorList) { DARABONBA_PTR_SET_RVALUE(operatorList_, operatorList) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline MetaDataFields& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline MetaDataFields& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        // The key of the field.
        shared_ptr<string> filed_ {};
        // The name of the field.
        shared_ptr<string> filedName_ {};
        // The operators.
        shared_ptr<vector<MetaDataFields::OperatorList>> operatorList_ {};
        // The sample field.
        shared_ptr<string> sample_ {};
        // The value type of the field.
        shared_ptr<string> valueType_ {};
      };

      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceName_ == nullptr && this->description_ == nullptr && this->metaDataFields_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int32_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0) };
      inline MetaDatas& setDataSourceId(int32_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline MetaDatas& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MetaDatas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // metaDataFields Field Functions 
      bool hasMetaDataFields() const { return this->metaDataFields_ != nullptr;};
      void deleteMetaDataFields() { this->metaDataFields_ = nullptr;};
      inline const vector<MetaDatas::MetaDataFields> & getMetaDataFields() const { DARABONBA_PTR_GET_CONST(metaDataFields_, vector<MetaDatas::MetaDataFields>) };
      inline vector<MetaDatas::MetaDataFields> getMetaDataFields() { DARABONBA_PTR_GET(metaDataFields_, vector<MetaDatas::MetaDataFields>) };
      inline MetaDatas& setMetaDataFields(const vector<MetaDatas::MetaDataFields> & metaDataFields) { DARABONBA_PTR_SET_VALUE(metaDataFields_, metaDataFields) };
      inline MetaDatas& setMetaDataFields(vector<MetaDatas::MetaDataFields> && metaDataFields) { DARABONBA_PTR_SET_RVALUE(metaDataFields_, metaDataFields) };


    protected:
      // The ID of the data source.
      shared_ptr<int32_t> dataSourceId_ {};
      // The name of the data source.
      shared_ptr<string> dataSourceName_ {};
      // The description of the data source.
      shared_ptr<string> description_ {};
      // The metadata files.
      shared_ptr<vector<MetaDatas::MetaDataFields>> metaDataFields_ {};
    };

    virtual bool empty() const override { return this->metaDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // metaDatas Field Functions 
    bool hasMetaDatas() const { return this->metaDatas_ != nullptr;};
    void deleteMetaDatas() { this->metaDatas_ = nullptr;};
    inline const vector<DescribeDataSourceResponseBody::MetaDatas> & getMetaDatas() const { DARABONBA_PTR_GET_CONST(metaDatas_, vector<DescribeDataSourceResponseBody::MetaDatas>) };
    inline vector<DescribeDataSourceResponseBody::MetaDatas> getMetaDatas() { DARABONBA_PTR_GET(metaDatas_, vector<DescribeDataSourceResponseBody::MetaDatas>) };
    inline DescribeDataSourceResponseBody& setMetaDatas(const vector<DescribeDataSourceResponseBody::MetaDatas> & metaDatas) { DARABONBA_PTR_SET_VALUE(metaDatas_, metaDatas) };
    inline DescribeDataSourceResponseBody& setMetaDatas(vector<DescribeDataSourceResponseBody::MetaDatas> && metaDatas) { DARABONBA_PTR_SET_RVALUE(metaDatas_, metaDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the data sources.
    shared_ptr<vector<DescribeDataSourceResponseBody::MetaDatas>> metaDatas_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

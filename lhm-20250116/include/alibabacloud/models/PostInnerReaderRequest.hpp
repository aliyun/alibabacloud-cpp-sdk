// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTINNERREADERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTINNERREADERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class PostInnerReaderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostInnerReaderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceDescriptor, dataSourceDescriptor_);
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, PostInnerReaderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceDescriptor, dataSourceDescriptor_);
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
    };
    PostInnerReaderRequest() = default ;
    PostInnerReaderRequest(const PostInnerReaderRequest &) = default ;
    PostInnerReaderRequest(PostInnerReaderRequest &&) = default ;
    PostInnerReaderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostInnerReaderRequest() = default ;
    PostInnerReaderRequest& operator=(const PostInnerReaderRequest &) = default ;
    PostInnerReaderRequest& operator=(PostInnerReaderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceDescriptor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceDescriptor& obj) { 
        DARABONBA_PTR_TO_JSON(dsName, dsName_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceDescriptor& obj) { 
        DARABONBA_PTR_FROM_JSON(dsName, dsName_);
      };
      DataSourceDescriptor() = default ;
      DataSourceDescriptor(const DataSourceDescriptor &) = default ;
      DataSourceDescriptor(DataSourceDescriptor &&) = default ;
      DataSourceDescriptor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceDescriptor() = default ;
      DataSourceDescriptor& operator=(const DataSourceDescriptor &) = default ;
      DataSourceDescriptor& operator=(DataSourceDescriptor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dsName_ == nullptr; };
      // dsName Field Functions 
      bool hasDsName() const { return this->dsName_ != nullptr;};
      void deleteDsName() { this->dsName_ = nullptr;};
      inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
      inline DataSourceDescriptor& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


    protected:
      shared_ptr<string> dsName_ {};
    };

    virtual bool empty() const override { return this->dataSourceDescriptor_ == nullptr
        && this->dataSourceName_ == nullptr; };
    // dataSourceDescriptor Field Functions 
    bool hasDataSourceDescriptor() const { return this->dataSourceDescriptor_ != nullptr;};
    void deleteDataSourceDescriptor() { this->dataSourceDescriptor_ = nullptr;};
    inline const PostInnerReaderRequest::DataSourceDescriptor & getDataSourceDescriptor() const { DARABONBA_PTR_GET_CONST(dataSourceDescriptor_, PostInnerReaderRequest::DataSourceDescriptor) };
    inline PostInnerReaderRequest::DataSourceDescriptor getDataSourceDescriptor() { DARABONBA_PTR_GET(dataSourceDescriptor_, PostInnerReaderRequest::DataSourceDescriptor) };
    inline PostInnerReaderRequest& setDataSourceDescriptor(const PostInnerReaderRequest::DataSourceDescriptor & dataSourceDescriptor) { DARABONBA_PTR_SET_VALUE(dataSourceDescriptor_, dataSourceDescriptor) };
    inline PostInnerReaderRequest& setDataSourceDescriptor(PostInnerReaderRequest::DataSourceDescriptor && dataSourceDescriptor) { DARABONBA_PTR_SET_RVALUE(dataSourceDescriptor_, dataSourceDescriptor) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline PostInnerReaderRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


  protected:
    shared_ptr<PostInnerReaderRequest::DataSourceDescriptor> dataSourceDescriptor_ {};
    shared_ptr<string> dataSourceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif

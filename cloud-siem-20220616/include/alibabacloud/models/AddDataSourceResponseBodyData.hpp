// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddDataSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
    };
    AddDataSourceResponseBodyData() = default ;
    AddDataSourceResponseBodyData(const AddDataSourceResponseBodyData &) = default ;
    AddDataSourceResponseBodyData(AddDataSourceResponseBodyData &&) = default ;
    AddDataSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceResponseBodyData() = default ;
    AddDataSourceResponseBodyData& operator=(const AddDataSourceResponseBodyData &) = default ;
    AddDataSourceResponseBodyData& operator=(AddDataSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->dataSourceInstanceId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline AddDataSourceResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline AddDataSourceResponseBodyData& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


  protected:
    // The number of data sources that are added. The value 1 indicates that data source is added, and a value less than or equal to 0 indicates that the data source failed to be added.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ModifyDataSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
    };
    ModifyDataSourceResponseBodyData() = default ;
    ModifyDataSourceResponseBodyData(const ModifyDataSourceResponseBodyData &) = default ;
    ModifyDataSourceResponseBodyData(ModifyDataSourceResponseBodyData &&) = default ;
    ModifyDataSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceResponseBodyData() = default ;
    ModifyDataSourceResponseBodyData& operator=(const ModifyDataSourceResponseBodyData &) = default ;
    ModifyDataSourceResponseBodyData& operator=(ModifyDataSourceResponseBodyData &&) = default ;
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
    inline ModifyDataSourceResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dataSourceInstanceId Field Functions 
    bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
    void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
    inline string dataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
    inline ModifyDataSourceResponseBodyData& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


  protected:
    // The number of data sources that are modified. The value 1 indicates that the modification is successful, and a value less than or equal to 0 indicates that the modification failed.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
    std::shared_ptr<string> dataSourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

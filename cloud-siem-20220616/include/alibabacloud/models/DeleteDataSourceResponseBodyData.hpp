// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DeleteDataSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DeleteDataSourceResponseBodyData() = default ;
    DeleteDataSourceResponseBodyData(const DeleteDataSourceResponseBodyData &) = default ;
    DeleteDataSourceResponseBodyData(DeleteDataSourceResponseBodyData &&) = default ;
    DeleteDataSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSourceResponseBodyData() = default ;
    DeleteDataSourceResponseBodyData& operator=(const DeleteDataSourceResponseBodyData &) = default ;
    DeleteDataSourceResponseBodyData& operator=(DeleteDataSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DeleteDataSourceResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The number of data sources that are removed. The value 1 indicates that data source is removed, and a value less than or equal to 0 indicates that the data source failed to be removed.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

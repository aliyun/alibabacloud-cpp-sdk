// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONSPECSHAREDSTORAGEDESCRIPTOR_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONSPECSHAREDSTORAGEDESCRIPTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PartitionSpecSharedStorageDescriptor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionSpecSharedStorageDescriptor& obj) { 
      DARABONBA_PTR_TO_JSON(Cols, cols_);
      DARABONBA_PTR_TO_JSON(Location, location_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionSpecSharedStorageDescriptor& obj) { 
      DARABONBA_PTR_FROM_JSON(Cols, cols_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
    };
    PartitionSpecSharedStorageDescriptor() = default ;
    PartitionSpecSharedStorageDescriptor(const PartitionSpecSharedStorageDescriptor &) = default ;
    PartitionSpecSharedStorageDescriptor(PartitionSpecSharedStorageDescriptor &&) = default ;
    PartitionSpecSharedStorageDescriptor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionSpecSharedStorageDescriptor() = default ;
    PartitionSpecSharedStorageDescriptor& operator=(const PartitionSpecSharedStorageDescriptor &) = default ;
    PartitionSpecSharedStorageDescriptor& operator=(PartitionSpecSharedStorageDescriptor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cols_ == nullptr
        && return this->location_ == nullptr; };
    // cols Field Functions 
    bool hasCols() const { return this->cols_ != nullptr;};
    void deleteCols() { this->cols_ = nullptr;};
    inline const vector<Models::FieldSchema> & cols() const { DARABONBA_PTR_GET_CONST(cols_, vector<Models::FieldSchema>) };
    inline vector<Models::FieldSchema> cols() { DARABONBA_PTR_GET(cols_, vector<Models::FieldSchema>) };
    inline PartitionSpecSharedStorageDescriptor& setCols(const vector<Models::FieldSchema> & cols) { DARABONBA_PTR_SET_VALUE(cols_, cols) };
    inline PartitionSpecSharedStorageDescriptor& setCols(vector<Models::FieldSchema> && cols) { DARABONBA_PTR_SET_RVALUE(cols_, cols) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline PartitionSpecSharedStorageDescriptor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


  protected:
    std::shared_ptr<vector<Models::FieldSchema>> cols_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif

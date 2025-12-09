// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUESTCLOUDASSETQUERYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUESTCLOUDASSETQUERYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetInstancesRequestCloudAssetQueryData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesRequestCloudAssetQueryData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesRequestCloudAssetQueryData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    ListCloudAssetInstancesRequestCloudAssetQueryData() = default ;
    ListCloudAssetInstancesRequestCloudAssetQueryData(const ListCloudAssetInstancesRequestCloudAssetQueryData &) = default ;
    ListCloudAssetInstancesRequestCloudAssetQueryData(ListCloudAssetInstancesRequestCloudAssetQueryData &&) = default ;
    ListCloudAssetInstancesRequestCloudAssetQueryData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesRequestCloudAssetQueryData() = default ;
    ListCloudAssetInstancesRequestCloudAssetQueryData& operator=(const ListCloudAssetInstancesRequestCloudAssetQueryData &) = default ;
    ListCloudAssetInstancesRequestCloudAssetQueryData& operator=(ListCloudAssetInstancesRequestCloudAssetQueryData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->operator_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListCloudAssetInstancesRequestCloudAssetQueryData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListCloudAssetInstancesRequestCloudAssetQueryData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

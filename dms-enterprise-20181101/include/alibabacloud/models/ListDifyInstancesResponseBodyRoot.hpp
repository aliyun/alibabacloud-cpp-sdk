// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDifyInstancesResponseBodyRootData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDifyInstancesResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDifyInstancesResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListDifyInstancesResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ListDifyInstancesResponseBodyRoot() = default ;
    ListDifyInstancesResponseBodyRoot(const ListDifyInstancesResponseBodyRoot &) = default ;
    ListDifyInstancesResponseBodyRoot(ListDifyInstancesResponseBodyRoot &&) = default ;
    ListDifyInstancesResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDifyInstancesResponseBodyRoot() = default ;
    ListDifyInstancesResponseBodyRoot& operator=(const ListDifyInstancesResponseBodyRoot &) = default ;
    ListDifyInstancesResponseBodyRoot& operator=(ListDifyInstancesResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListDifyInstancesResponseBodyRootData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListDifyInstancesResponseBodyRootData>) };
    inline vector<Models::ListDifyInstancesResponseBodyRootData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListDifyInstancesResponseBodyRootData>) };
    inline ListDifyInstancesResponseBodyRoot& setData(const vector<Models::ListDifyInstancesResponseBodyRootData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDifyInstancesResponseBodyRoot& setData(vector<Models::ListDifyInstancesResponseBodyRootData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::ListDifyInstancesResponseBodyRootData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

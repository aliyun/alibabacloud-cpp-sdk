// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCONNECTIONTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCONNECTIONTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterConnectionTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterConnectionTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterConnectionTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    ListClusterConnectionTypesResponseBodyData() = default ;
    ListClusterConnectionTypesResponseBodyData(const ListClusterConnectionTypesResponseBodyData &) = default ;
    ListClusterConnectionTypesResponseBodyData(ListClusterConnectionTypesResponseBodyData &&) = default ;
    ListClusterConnectionTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterConnectionTypesResponseBodyData() = default ;
    ListClusterConnectionTypesResponseBodyData& operator=(const ListClusterConnectionTypesResponseBodyData &) = default ;
    ListClusterConnectionTypesResponseBodyData& operator=(ListClusterConnectionTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->showName_ == nullptr; };
    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListClusterConnectionTypesResponseBodyData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // The connection type.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

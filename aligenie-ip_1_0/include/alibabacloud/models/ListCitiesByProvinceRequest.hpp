// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCITIESBYPROVINCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCITIESBYPROVINCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListCitiesByProvinceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCitiesByProvinceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, ListCitiesByProvinceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    ListCitiesByProvinceRequest() = default ;
    ListCitiesByProvinceRequest(const ListCitiesByProvinceRequest &) = default ;
    ListCitiesByProvinceRequest(ListCitiesByProvinceRequest &&) = default ;
    ListCitiesByProvinceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCitiesByProvinceRequest() = default ;
    ListCitiesByProvinceRequest& operator=(const ListCitiesByProvinceRequest &) = default ;
    ListCitiesByProvinceRequest& operator=(ListCitiesByProvinceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->province_ == nullptr; };
    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListCitiesByProvinceRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    // This parameter is required.
    shared_ptr<string> province_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif

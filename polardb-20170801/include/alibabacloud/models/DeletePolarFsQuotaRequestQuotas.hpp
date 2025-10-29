// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUESTQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTAREQUESTQUOTAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsQuotaRequestQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsQuotaRequestQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsQuotaRequestQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeletePolarFsQuotaRequestQuotas() = default ;
    DeletePolarFsQuotaRequestQuotas(const DeletePolarFsQuotaRequestQuotas &) = default ;
    DeletePolarFsQuotaRequestQuotas(DeletePolarFsQuotaRequestQuotas &&) = default ;
    DeletePolarFsQuotaRequestQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsQuotaRequestQuotas() = default ;
    DeletePolarFsQuotaRequestQuotas& operator=(const DeletePolarFsQuotaRequestQuotas &) = default ;
    DeletePolarFsQuotaRequestQuotas& operator=(DeletePolarFsQuotaRequestQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeletePolarFsQuotaRequestQuotas& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeletePolarFsQuotaRequestQuotas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

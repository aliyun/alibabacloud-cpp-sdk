// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeleteProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
    };
    DeleteProductRequest() = default ;
    DeleteProductRequest(const DeleteProductRequest &) = default ;
    DeleteProductRequest(DeleteProductRequest &&) = default ;
    DeleteProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProductRequest() = default ;
    DeleteProductRequest& operator=(const DeleteProductRequest &) = default ;
    DeleteProductRequest& operator=(DeleteProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline DeleteProductRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

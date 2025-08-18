// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATADOMAINRESPONSEBODYCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATADOMAINRESPONSEBODYCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataDomainResponseBodyCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataDomainResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataDomainResponseBodyCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
    };
    CreateDataDomainResponseBodyCreateResult() = default ;
    CreateDataDomainResponseBodyCreateResult(const CreateDataDomainResponseBodyCreateResult &) = default ;
    CreateDataDomainResponseBodyCreateResult(CreateDataDomainResponseBodyCreateResult &&) = default ;
    CreateDataDomainResponseBodyCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataDomainResponseBodyCreateResult() = default ;
    CreateDataDomainResponseBodyCreateResult& operator=(const CreateDataDomainResponseBodyCreateResult &) = default ;
    CreateDataDomainResponseBodyCreateResult& operator=(CreateDataDomainResponseBodyCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDomainId_ != nullptr; };
    // dataDomainId Field Functions 
    bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
    void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
    inline int64_t dataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
    inline CreateDataDomainResponseBodyCreateResult& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


  protected:
    std::shared_ptr<int64_t> dataDomainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

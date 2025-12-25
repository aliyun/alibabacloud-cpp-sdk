// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUESTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTCREATEINSTANCEREQUESTSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestCreateInstanceRequestStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateInstanceRequestCreateInstanceRequestStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestCreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_TO_JSON(Oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestCreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
    };
    CreateInstanceRequestCreateInstanceRequestStorage() = default ;
    CreateInstanceRequestCreateInstanceRequestStorage(const CreateInstanceRequestCreateInstanceRequestStorage &) = default ;
    CreateInstanceRequestCreateInstanceRequestStorage(CreateInstanceRequestCreateInstanceRequestStorage &&) = default ;
    CreateInstanceRequestCreateInstanceRequestStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestCreateInstanceRequestStorage() = default ;
    CreateInstanceRequestCreateInstanceRequestStorage& operator=(const CreateInstanceRequestCreateInstanceRequestStorage &) = default ;
    CreateInstanceRequestCreateInstanceRequestStorage& operator=(CreateInstanceRequestCreateInstanceRequestStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oss_ == nullptr; };
    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::CreateInstanceRequestCreateInstanceRequestStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::CreateInstanceRequestCreateInstanceRequestStorageOss) };
    inline Models::CreateInstanceRequestCreateInstanceRequestStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::CreateInstanceRequestCreateInstanceRequestStorageOss) };
    inline CreateInstanceRequestCreateInstanceRequestStorage& setOss(const Models::CreateInstanceRequestCreateInstanceRequestStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline CreateInstanceRequestCreateInstanceRequestStorage& setOss(Models::CreateInstanceRequestCreateInstanceRequestStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::CreateInstanceRequestCreateInstanceRequestStorageOss> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateInstanceRequestStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_TO_JSON(FullyManaged, fullyManaged_);
      DARABONBA_PTR_TO_JSON(Oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(FullyManaged, fullyManaged_);
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
    };
    CreateInstanceRequestStorage() = default ;
    CreateInstanceRequestStorage(const CreateInstanceRequestStorage &) = default ;
    CreateInstanceRequestStorage(CreateInstanceRequestStorage &&) = default ;
    CreateInstanceRequestStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestStorage() = default ;
    CreateInstanceRequestStorage& operator=(const CreateInstanceRequestStorage &) = default ;
    CreateInstanceRequestStorage& operator=(CreateInstanceRequestStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullyManaged_ == nullptr
        && return this->oss_ == nullptr; };
    // fullyManaged Field Functions 
    bool hasFullyManaged() const { return this->fullyManaged_ != nullptr;};
    void deleteFullyManaged() { this->fullyManaged_ = nullptr;};
    inline bool fullyManaged() const { DARABONBA_PTR_GET_DEFAULT(fullyManaged_, false) };
    inline CreateInstanceRequestStorage& setFullyManaged(bool fullyManaged) { DARABONBA_PTR_SET_VALUE(fullyManaged_, fullyManaged) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::CreateInstanceRequestStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::CreateInstanceRequestStorageOss) };
    inline Models::CreateInstanceRequestStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::CreateInstanceRequestStorageOss) };
    inline CreateInstanceRequestStorage& setOss(const Models::CreateInstanceRequestStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline CreateInstanceRequestStorage& setOss(Models::CreateInstanceRequestStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    std::shared_ptr<bool> fullyManaged_ = nullptr;
    std::shared_ptr<Models::CreateInstanceRequestStorageOss> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif

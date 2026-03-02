// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCCOMPONENTTEMPLATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCCOMPONENTTEMPLATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SyncComponentTemplateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncComponentTemplateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, SyncComponentTemplateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    SyncComponentTemplateConfigRequest() = default ;
    SyncComponentTemplateConfigRequest(const SyncComponentTemplateConfigRequest &) = default ;
    SyncComponentTemplateConfigRequest(SyncComponentTemplateConfigRequest &&) = default ;
    SyncComponentTemplateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncComponentTemplateConfigRequest() = default ;
    SyncComponentTemplateConfigRequest& operator=(const SyncComponentTemplateConfigRequest &) = default ;
    SyncComponentTemplateConfigRequest& operator=(SyncComponentTemplateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SyncComponentTemplateConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

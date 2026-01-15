// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUMPMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DUMPMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DumpMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DumpMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DumpMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DumpMetaRequest() = default ;
    DumpMetaRequest(const DumpMetaRequest &) = default ;
    DumpMetaRequest(DumpMetaRequest &&) = default ;
    DumpMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DumpMetaRequest() = default ;
    DumpMetaRequest& operator=(const DumpMetaRequest &) = default ;
    DumpMetaRequest& operator=(DumpMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DumpMetaRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateNamespaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceUid, namespaceUid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceUid, namespaceUid_);
    };
    CreateNamespaceResponseBodyData() = default ;
    CreateNamespaceResponseBodyData(const CreateNamespaceResponseBodyData &) = default ;
    CreateNamespaceResponseBodyData(CreateNamespaceResponseBodyData &&) = default ;
    CreateNamespaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceResponseBodyData() = default ;
    CreateNamespaceResponseBodyData& operator=(const CreateNamespaceResponseBodyData &) = default ;
    CreateNamespaceResponseBodyData& operator=(CreateNamespaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceUid_ == nullptr; };
    // namespaceUid Field Functions 
    bool hasNamespaceUid() const { return this->namespaceUid_ != nullptr;};
    void deleteNamespaceUid() { this->namespaceUid_ = nullptr;};
    inline string namespaceUid() const { DARABONBA_PTR_GET_DEFAULT(namespaceUid_, "") };
    inline CreateNamespaceResponseBodyData& setNamespaceUid(string namespaceUid) { DARABONBA_PTR_SET_VALUE(namespaceUid_, namespaceUid) };


  protected:
    // The UID of the namespace.
    std::shared_ptr<string> namespaceUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYSYSTEMMCPSERVERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAPIMCPSERVERRESPONSEBODYSYSTEMMCPSERVERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiMcpServerResponseBodySystemMcpServerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiMcpServerResponseBodySystemMcpServerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiMcpServerResponseBodySystemMcpServerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    GetApiMcpServerResponseBodySystemMcpServerInfo() = default ;
    GetApiMcpServerResponseBodySystemMcpServerInfo(const GetApiMcpServerResponseBodySystemMcpServerInfo &) = default ;
    GetApiMcpServerResponseBodySystemMcpServerInfo(GetApiMcpServerResponseBodySystemMcpServerInfo &&) = default ;
    GetApiMcpServerResponseBodySystemMcpServerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiMcpServerResponseBodySystemMcpServerInfo() = default ;
    GetApiMcpServerResponseBodySystemMcpServerInfo& operator=(const GetApiMcpServerResponseBodySystemMcpServerInfo &) = default ;
    GetApiMcpServerResponseBodySystemMcpServerInfo& operator=(GetApiMcpServerResponseBodySystemMcpServerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->product_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetApiMcpServerResponseBodySystemMcpServerInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetApiMcpServerResponseBodySystemMcpServerInfo& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif

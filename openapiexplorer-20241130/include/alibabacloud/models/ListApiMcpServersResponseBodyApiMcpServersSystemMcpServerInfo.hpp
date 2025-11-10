// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSSYSTEMMCPSERVERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSSYSTEMMCPSERVERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo() = default ;
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo(const ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo(ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo &&) = default ;
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo() = default ;
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& operator=(const ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& operator=(ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo &&) = default ;
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
    inline ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersSystemMcpServerInfo& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif

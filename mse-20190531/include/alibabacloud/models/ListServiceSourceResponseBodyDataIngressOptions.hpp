// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODYDATAINGRESSOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESOURCERESPONSEBODYDATAINGRESSOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListServiceSourceResponseBodyDataIngressOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSourceResponseBodyDataIngressOptions& obj) { 
      DARABONBA_PTR_TO_JSON(EnableIngress, enableIngress_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(IngressClass, ingressClass_);
      DARABONBA_PTR_TO_JSON(WatchNamespace, watchNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSourceResponseBodyDataIngressOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableIngress, enableIngress_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(IngressClass, ingressClass_);
      DARABONBA_PTR_FROM_JSON(WatchNamespace, watchNamespace_);
    };
    ListServiceSourceResponseBodyDataIngressOptions() = default ;
    ListServiceSourceResponseBodyDataIngressOptions(const ListServiceSourceResponseBodyDataIngressOptions &) = default ;
    ListServiceSourceResponseBodyDataIngressOptions(ListServiceSourceResponseBodyDataIngressOptions &&) = default ;
    ListServiceSourceResponseBodyDataIngressOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSourceResponseBodyDataIngressOptions() = default ;
    ListServiceSourceResponseBodyDataIngressOptions& operator=(const ListServiceSourceResponseBodyDataIngressOptions &) = default ;
    ListServiceSourceResponseBodyDataIngressOptions& operator=(ListServiceSourceResponseBodyDataIngressOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableIngress_ != nullptr
        && this->enableStatus_ != nullptr && this->ingressClass_ != nullptr && this->watchNamespace_ != nullptr; };
    // enableIngress Field Functions 
    bool hasEnableIngress() const { return this->enableIngress_ != nullptr;};
    void deleteEnableIngress() { this->enableIngress_ = nullptr;};
    inline bool enableIngress() const { DARABONBA_PTR_GET_DEFAULT(enableIngress_, false) };
    inline ListServiceSourceResponseBodyDataIngressOptions& setEnableIngress(bool enableIngress) { DARABONBA_PTR_SET_VALUE(enableIngress_, enableIngress) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline bool enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
    inline ListServiceSourceResponseBodyDataIngressOptions& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // ingressClass Field Functions 
    bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
    void deleteIngressClass() { this->ingressClass_ = nullptr;};
    inline string ingressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
    inline ListServiceSourceResponseBodyDataIngressOptions& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


    // watchNamespace Field Functions 
    bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
    void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
    inline string watchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
    inline ListServiceSourceResponseBodyDataIngressOptions& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


  protected:
    // Indicates whether Ingresses are enabled.
    std::shared_ptr<bool> enableIngress_ = nullptr;
    // Indicates whether the Ingress status is updated.
    std::shared_ptr<bool> enableStatus_ = nullptr;
    // The Ingress class.
    std::shared_ptr<string> ingressClass_ = nullptr;
    // The namespace that you want to monitor.
    std::shared_ptr<string> watchNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

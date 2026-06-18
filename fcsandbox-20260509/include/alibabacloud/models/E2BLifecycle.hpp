// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BLIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_E2BLIFECYCLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BLifecycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BLifecycle& obj) { 
      DARABONBA_PTR_TO_JSON(autoResume, autoResume_);
      DARABONBA_PTR_TO_JSON(onTimeout, onTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, E2BLifecycle& obj) { 
      DARABONBA_PTR_FROM_JSON(autoResume, autoResume_);
      DARABONBA_PTR_FROM_JSON(onTimeout, onTimeout_);
    };
    E2BLifecycle() = default ;
    E2BLifecycle(const E2BLifecycle &) = default ;
    E2BLifecycle(E2BLifecycle &&) = default ;
    E2BLifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BLifecycle() = default ;
    E2BLifecycle& operator=(const E2BLifecycle &) = default ;
    E2BLifecycle& operator=(E2BLifecycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoResume_ == nullptr
        && this->onTimeout_ == nullptr; };
    // autoResume Field Functions 
    bool hasAutoResume() const { return this->autoResume_ != nullptr;};
    void deleteAutoResume() { this->autoResume_ = nullptr;};
    inline bool getAutoResume() const { DARABONBA_PTR_GET_DEFAULT(autoResume_, false) };
    inline E2BLifecycle& setAutoResume(bool autoResume) { DARABONBA_PTR_SET_VALUE(autoResume_, autoResume) };


    // onTimeout Field Functions 
    bool hasOnTimeout() const { return this->onTimeout_ != nullptr;};
    void deleteOnTimeout() { this->onTimeout_ = nullptr;};
    inline string getOnTimeout() const { DARABONBA_PTR_GET_DEFAULT(onTimeout_, "") };
    inline E2BLifecycle& setOnTimeout(string onTimeout) { DARABONBA_PTR_SET_VALUE(onTimeout_, onTimeout) };


  protected:
    shared_ptr<bool> autoResume_ {};
    shared_ptr<string> onTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif

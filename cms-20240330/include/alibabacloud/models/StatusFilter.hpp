// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATUSFILTER_HPP_
#define ALIBABACLOUD_MODELS_STATUSFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class StatusFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatusFilter& obj) { 
      DARABONBA_PTR_TO_JSON(eq, eq_);
    };
    friend void from_json(const Darabonba::Json& j, StatusFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(eq, eq_);
    };
    StatusFilter() = default ;
    StatusFilter(const StatusFilter &) = default ;
    StatusFilter(StatusFilter &&) = default ;
    StatusFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatusFilter() = default ;
    StatusFilter& operator=(const StatusFilter &) = default ;
    StatusFilter& operator=(StatusFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eq_ == nullptr; };
    // eq Field Functions 
    bool hasEq() const { return this->eq_ != nullptr;};
    void deleteEq() { this->eq_ = nullptr;};
    inline string getEq() const { DARABONBA_PTR_GET_DEFAULT(eq_, "") };
    inline StatusFilter& setEq(string eq) { DARABONBA_PTR_SET_VALUE(eq_, eq) };


  protected:
    shared_ptr<string> eq_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

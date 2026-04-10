// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPLAYNAMEFILTER_HPP_
#define ALIBABACLOUD_MODELS_DISPLAYNAMEFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DisplayNameFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisplayNameFilter& obj) { 
      DARABONBA_PTR_TO_JSON(contains, contains_);
      DARABONBA_PTR_TO_JSON(notContains, notContains_);
    };
    friend void from_json(const Darabonba::Json& j, DisplayNameFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(contains, contains_);
      DARABONBA_PTR_FROM_JSON(notContains, notContains_);
    };
    DisplayNameFilter() = default ;
    DisplayNameFilter(const DisplayNameFilter &) = default ;
    DisplayNameFilter(DisplayNameFilter &&) = default ;
    DisplayNameFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisplayNameFilter() = default ;
    DisplayNameFilter& operator=(const DisplayNameFilter &) = default ;
    DisplayNameFilter& operator=(DisplayNameFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contains_ == nullptr
        && this->notContains_ == nullptr; };
    // contains Field Functions 
    bool hasContains() const { return this->contains_ != nullptr;};
    void deleteContains() { this->contains_ = nullptr;};
    inline string getContains() const { DARABONBA_PTR_GET_DEFAULT(contains_, "") };
    inline DisplayNameFilter& setContains(string contains) { DARABONBA_PTR_SET_VALUE(contains_, contains) };


    // notContains Field Functions 
    bool hasNotContains() const { return this->notContains_ != nullptr;};
    void deleteNotContains() { this->notContains_ = nullptr;};
    inline string getNotContains() const { DARABONBA_PTR_GET_DEFAULT(notContains_, "") };
    inline DisplayNameFilter& setNotContains(string notContains) { DARABONBA_PTR_SET_VALUE(notContains_, notContains) };


  protected:
    shared_ptr<string> contains_ {};
    shared_ptr<string> notContains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

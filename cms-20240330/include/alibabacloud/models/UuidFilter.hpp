// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UUIDFILTER_HPP_
#define ALIBABACLOUD_MODELS_UUIDFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UuidFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UuidFilter& obj) { 
      DARABONBA_PTR_TO_JSON(eq, eq_);
      DARABONBA_PTR_TO_JSON(in, in_);
    };
    friend void from_json(const Darabonba::Json& j, UuidFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(eq, eq_);
      DARABONBA_PTR_FROM_JSON(in, in_);
    };
    UuidFilter() = default ;
    UuidFilter(const UuidFilter &) = default ;
    UuidFilter(UuidFilter &&) = default ;
    UuidFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UuidFilter() = default ;
    UuidFilter& operator=(const UuidFilter &) = default ;
    UuidFilter& operator=(UuidFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eq_ == nullptr
        && this->in_ == nullptr; };
    // eq Field Functions 
    bool hasEq() const { return this->eq_ != nullptr;};
    void deleteEq() { this->eq_ = nullptr;};
    inline string getEq() const { DARABONBA_PTR_GET_DEFAULT(eq_, "") };
    inline UuidFilter& setEq(string eq) { DARABONBA_PTR_SET_VALUE(eq_, eq) };


    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline const vector<string> & getIn() const { DARABONBA_PTR_GET_CONST(in_, vector<string>) };
    inline vector<string> getIn() { DARABONBA_PTR_GET(in_, vector<string>) };
    inline UuidFilter& setIn(const vector<string> & in) { DARABONBA_PTR_SET_VALUE(in_, in) };
    inline UuidFilter& setIn(vector<string> && in) { DARABONBA_PTR_SET_RVALUE(in_, in) };


  protected:
    shared_ptr<string> eq_ {};
    shared_ptr<vector<string>> in_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

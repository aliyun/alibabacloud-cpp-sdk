// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHARTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_CHARTSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ChartsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChartsValue& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ChartsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    ChartsValue() = default ;
    ChartsValue(const ChartsValue &) = default ;
    ChartsValue(ChartsValue &&) = default ;
    ChartsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChartsValue() = default ;
    ChartsValue& operator=(const ChartsValue &) = default ;
    ChartsValue& operator=(ChartsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Y : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Y& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Y& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      Y() = default ;
      Y(const Y &) = default ;
      Y(Y &&) = default ;
      Y(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Y() = default ;
      Y& operator=(const Y &) = default ;
      Y& operator=(Y &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->data_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
      inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
      inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      // The name.
      shared_ptr<string> name_ {};
      // The QPS at the point in time.
      shared_ptr<vector<int64_t>> data_ {};
    };

    virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
    inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
    inline ChartsValue& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
    inline ChartsValue& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline const vector<ChartsValue::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<ChartsValue::Y>) };
    inline vector<ChartsValue::Y> getY() { DARABONBA_PTR_GET(y_, vector<ChartsValue::Y>) };
    inline ChartsValue& setY(const vector<ChartsValue::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
    inline ChartsValue& setY(vector<ChartsValue::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


  protected:
    // The X-axis.
    shared_ptr<vector<string>> x_ {};
    // The Y-axis.
    shared_ptr<vector<ChartsValue::Y>> y_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

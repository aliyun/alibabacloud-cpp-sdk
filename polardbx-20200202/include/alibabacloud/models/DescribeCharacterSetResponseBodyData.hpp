// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCharacterSetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCharacterSetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSet, characterSet_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCharacterSetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSet, characterSet_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    DescribeCharacterSetResponseBodyData() = default ;
    DescribeCharacterSetResponseBodyData(const DescribeCharacterSetResponseBodyData &) = default ;
    DescribeCharacterSetResponseBodyData(DescribeCharacterSetResponseBodyData &&) = default ;
    DescribeCharacterSetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCharacterSetResponseBodyData() = default ;
    DescribeCharacterSetResponseBodyData& operator=(const DescribeCharacterSetResponseBodyData &) = default ;
    DescribeCharacterSetResponseBodyData& operator=(DescribeCharacterSetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->characterSet_ == nullptr
        && return this->engine_ == nullptr; };
    // characterSet Field Functions 
    bool hasCharacterSet() const { return this->characterSet_ != nullptr;};
    void deleteCharacterSet() { this->characterSet_ = nullptr;};
    inline const vector<string> & characterSet() const { DARABONBA_PTR_GET_CONST(characterSet_, vector<string>) };
    inline vector<string> characterSet() { DARABONBA_PTR_GET(characterSet_, vector<string>) };
    inline DescribeCharacterSetResponseBodyData& setCharacterSet(const vector<string> & characterSet) { DARABONBA_PTR_SET_VALUE(characterSet_, characterSet) };
    inline DescribeCharacterSetResponseBodyData& setCharacterSet(vector<string> && characterSet) { DARABONBA_PTR_SET_RVALUE(characterSet_, characterSet) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeCharacterSetResponseBodyData& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    std::shared_ptr<vector<string>> characterSet_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

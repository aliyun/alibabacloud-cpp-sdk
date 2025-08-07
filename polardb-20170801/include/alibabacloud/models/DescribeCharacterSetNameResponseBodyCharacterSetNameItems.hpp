// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETNAMERESPONSEBODYCHARACTERSETNAMEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARACTERSETNAMERESPONSEBODYCHARACTERSETNAMEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCharacterSetNameResponseBodyCharacterSetNameItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCharacterSetNameResponseBodyCharacterSetNameItems& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCharacterSetNameResponseBodyCharacterSetNameItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
    };
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems() = default ;
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems(const DescribeCharacterSetNameResponseBodyCharacterSetNameItems &) = default ;
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems(DescribeCharacterSetNameResponseBodyCharacterSetNameItems &&) = default ;
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCharacterSetNameResponseBodyCharacterSetNameItems() = default ;
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems& operator=(const DescribeCharacterSetNameResponseBodyCharacterSetNameItems &) = default ;
    DescribeCharacterSetNameResponseBodyCharacterSetNameItems& operator=(DescribeCharacterSetNameResponseBodyCharacterSetNameItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->characterSetName_ != nullptr; };
    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline const vector<string> & characterSetName() const { DARABONBA_PTR_GET_CONST(characterSetName_, vector<string>) };
    inline vector<string> characterSetName() { DARABONBA_PTR_GET(characterSetName_, vector<string>) };
    inline DescribeCharacterSetNameResponseBodyCharacterSetNameItems& setCharacterSetName(const vector<string> & characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };
    inline DescribeCharacterSetNameResponseBodyCharacterSetNameItems& setCharacterSetName(vector<string> && characterSetName) { DARABONBA_PTR_SET_RVALUE(characterSetName_, characterSetName) };


  protected:
    std::shared_ptr<vector<string>> characterSetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

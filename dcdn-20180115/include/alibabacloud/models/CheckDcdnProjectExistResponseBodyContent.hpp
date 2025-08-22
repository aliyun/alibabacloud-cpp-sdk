// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CheckDcdnProjectExistResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDcdnProjectExistResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Exist, exist_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDcdnProjectExistResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Exist, exist_);
    };
    CheckDcdnProjectExistResponseBodyContent() = default ;
    CheckDcdnProjectExistResponseBodyContent(const CheckDcdnProjectExistResponseBodyContent &) = default ;
    CheckDcdnProjectExistResponseBodyContent(CheckDcdnProjectExistResponseBodyContent &&) = default ;
    CheckDcdnProjectExistResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDcdnProjectExistResponseBodyContent() = default ;
    CheckDcdnProjectExistResponseBodyContent& operator=(const CheckDcdnProjectExistResponseBodyContent &) = default ;
    CheckDcdnProjectExistResponseBodyContent& operator=(CheckDcdnProjectExistResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exist_ != nullptr; };
    // exist Field Functions 
    bool hasExist() const { return this->exist_ != nullptr;};
    void deleteExist() { this->exist_ = nullptr;};
    inline string exist() const { DARABONBA_PTR_GET_DEFAULT(exist_, "") };
    inline CheckDcdnProjectExistResponseBodyContent& setExist(string exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


  protected:
    // Indicates whether the real-time log delivery project exists. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> exist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

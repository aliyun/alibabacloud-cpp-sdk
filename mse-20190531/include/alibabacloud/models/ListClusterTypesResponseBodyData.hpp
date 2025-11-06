// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    ListClusterTypesResponseBodyData() = default ;
    ListClusterTypesResponseBodyData(const ListClusterTypesResponseBodyData &) = default ;
    ListClusterTypesResponseBodyData(ListClusterTypesResponseBodyData &&) = default ;
    ListClusterTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTypesResponseBodyData() = default ;
    ListClusterTypesResponseBodyData& operator=(const ListClusterTypesResponseBodyData &) = default ;
    ListClusterTypesResponseBodyData& operator=(ListClusterTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->showName_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListClusterTypesResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListClusterTypesResponseBodyData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    // The type of the MSE engine that can be activated.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

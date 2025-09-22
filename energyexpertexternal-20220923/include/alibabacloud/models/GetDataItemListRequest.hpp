// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAITEMLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAITEMLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataItemListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataItemListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataItemListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
    };
    GetDataItemListRequest() = default ;
    GetDataItemListRequest(const GetDataItemListRequest &) = default ;
    GetDataItemListRequest(GetDataItemListRequest &&) = default ;
    GetDataItemListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataItemListRequest() = default ;
    GetDataItemListRequest& operator=(const GetDataItemListRequest &) = default ;
    GetDataItemListRequest& operator=(GetDataItemListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataItemListRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

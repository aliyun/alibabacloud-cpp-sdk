// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHODINPUTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHODINPUTPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBodyServiceMethodListServiceMethodInputParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& obj) { 
      DARABONBA_PTR_TO_JSON(InputParam, inputParam_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& obj) { 
      DARABONBA_PTR_FROM_JSON(InputParam, inputParam_);
    };
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams(const ListMethodsResponseBodyServiceMethodListServiceMethodInputParams &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams(ListMethodsResponseBodyServiceMethodListServiceMethodInputParams &&) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBodyServiceMethodListServiceMethodInputParams() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& operator=(const ListMethodsResponseBodyServiceMethodListServiceMethodInputParams &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& operator=(ListMethodsResponseBodyServiceMethodListServiceMethodInputParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputParam_ == nullptr; };
    // inputParam Field Functions 
    bool hasInputParam() const { return this->inputParam_ != nullptr;};
    void deleteInputParam() { this->inputParam_ = nullptr;};
    inline const vector<string> & inputParam() const { DARABONBA_PTR_GET_CONST(inputParam_, vector<string>) };
    inline vector<string> inputParam() { DARABONBA_PTR_GET(inputParam_, vector<string>) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& setInputParam(const vector<string> & inputParam) { DARABONBA_PTR_SET_VALUE(inputParam_, inputParam) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethodInputParams& setInputParam(vector<string> && inputParam) { DARABONBA_PTR_SET_RVALUE(inputParam_, inputParam) };


  protected:
    std::shared_ptr<vector<string>> inputParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

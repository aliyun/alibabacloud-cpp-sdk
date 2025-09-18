// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLISTTOOLPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDRESPONSEBODYTOOLINFOLISTTOOLPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListCommandResponseBodyToolInfoListToolParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandResponseBodyToolInfoListToolParams& obj) { 
      DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_TO_JSON(ParamExample, paramExample_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandResponseBodyToolInfoListToolParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
    };
    ListCommandResponseBodyToolInfoListToolParams() = default ;
    ListCommandResponseBodyToolInfoListToolParams(const ListCommandResponseBodyToolInfoListToolParams &) = default ;
    ListCommandResponseBodyToolInfoListToolParams(ListCommandResponseBodyToolInfoListToolParams &&) = default ;
    ListCommandResponseBodyToolInfoListToolParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandResponseBodyToolInfoListToolParams() = default ;
    ListCommandResponseBodyToolInfoListToolParams& operator=(const ListCommandResponseBodyToolInfoListToolParams &) = default ;
    ListCommandResponseBodyToolInfoListToolParams& operator=(ListCommandResponseBodyToolInfoListToolParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramDesc_ != nullptr
        && this->paramExample_ != nullptr && this->paramName_ != nullptr; };
    // paramDesc Field Functions 
    bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
    void deleteParamDesc() { this->paramDesc_ = nullptr;};
    inline string paramDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
    inline ListCommandResponseBodyToolInfoListToolParams& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


    // paramExample Field Functions 
    bool hasParamExample() const { return this->paramExample_ != nullptr;};
    void deleteParamExample() { this->paramExample_ = nullptr;};
    inline string paramExample() const { DARABONBA_PTR_GET_DEFAULT(paramExample_, "") };
    inline ListCommandResponseBodyToolInfoListToolParams& setParamExample(string paramExample) { DARABONBA_PTR_SET_VALUE(paramExample_, paramExample) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline ListCommandResponseBodyToolInfoListToolParams& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


  protected:
    std::shared_ptr<string> paramDesc_ = nullptr;
    std::shared_ptr<string> paramExample_ = nullptr;
    std::shared_ptr<string> paramName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif

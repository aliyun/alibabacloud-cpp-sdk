// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODYMODELNAMES_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODYMODELNAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupportModelsResponseBodyModelNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportModelsResponseBodyModelNames& obj) { 
      DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportModelsResponseBodyModelNames& obj) { 
      DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
    };
    ListSupportModelsResponseBodyModelNames() = default ;
    ListSupportModelsResponseBodyModelNames(const ListSupportModelsResponseBodyModelNames &) = default ;
    ListSupportModelsResponseBodyModelNames(ListSupportModelsResponseBodyModelNames &&) = default ;
    ListSupportModelsResponseBodyModelNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportModelsResponseBodyModelNames() = default ;
    ListSupportModelsResponseBodyModelNames& operator=(const ListSupportModelsResponseBodyModelNames &) = default ;
    ListSupportModelsResponseBodyModelNames& operator=(ListSupportModelsResponseBodyModelNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelNames_ == nullptr; };
    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const vector<string> & modelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
    inline vector<string> modelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
    inline ListSupportModelsResponseBodyModelNames& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ListSupportModelsResponseBodyModelNames& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


  protected:
    std::shared_ptr<vector<string>> modelNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

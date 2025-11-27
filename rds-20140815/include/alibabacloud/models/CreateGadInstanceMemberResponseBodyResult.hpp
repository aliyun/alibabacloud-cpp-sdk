// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGadInstanceMemberResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCount, createCount_);
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCount, createCount_);
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
    };
    CreateGadInstanceMemberResponseBodyResult() = default ;
    CreateGadInstanceMemberResponseBodyResult(const CreateGadInstanceMemberResponseBodyResult &) = default ;
    CreateGadInstanceMemberResponseBodyResult(CreateGadInstanceMemberResponseBodyResult &&) = default ;
    CreateGadInstanceMemberResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceMemberResponseBodyResult() = default ;
    CreateGadInstanceMemberResponseBodyResult& operator=(const CreateGadInstanceMemberResponseBodyResult &) = default ;
    CreateGadInstanceMemberResponseBodyResult& operator=(CreateGadInstanceMemberResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCount_ == nullptr
        && return this->gadInstanceName_ == nullptr; };
    // createCount Field Functions 
    bool hasCreateCount() const { return this->createCount_ != nullptr;};
    void deleteCreateCount() { this->createCount_ = nullptr;};
    inline string createCount() const { DARABONBA_PTR_GET_DEFAULT(createCount_, "") };
    inline CreateGadInstanceMemberResponseBodyResult& setCreateCount(string createCount) { DARABONBA_PTR_SET_VALUE(createCount_, createCount) };


    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string gadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline CreateGadInstanceMemberResponseBodyResult& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


  protected:
    // The number of unit nodes that are created by calling this operation.
    std::shared_ptr<string> createCount_ = nullptr;
    // The ID of the global active database cluster.
    std::shared_ptr<string> gadInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCORPRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCORPRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CreateSubCorpResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCorpResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubCorpResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
    };
    CreateSubCorpResponseBodyModule() = default ;
    CreateSubCorpResponseBodyModule(const CreateSubCorpResponseBodyModule &) = default ;
    CreateSubCorpResponseBodyModule(CreateSubCorpResponseBodyModule &&) = default ;
    CreateSubCorpResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubCorpResponseBodyModule() = default ;
    CreateSubCorpResponseBodyModule& operator=(const CreateSubCorpResponseBodyModule &) = default ;
    CreateSubCorpResponseBodyModule& operator=(CreateSubCorpResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subCorpId_ != nullptr; };
    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline CreateSubCorpResponseBodyModule& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


  protected:
    std::shared_ptr<string> subCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

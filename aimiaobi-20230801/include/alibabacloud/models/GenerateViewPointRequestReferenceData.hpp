// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUESTREFERENCEDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUESTREFERENCEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateViewPointRequestReferenceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateViewPointRequestReferenceData& obj) { 
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateViewPointRequestReferenceData& obj) { 
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
    };
    GenerateViewPointRequestReferenceData() = default ;
    GenerateViewPointRequestReferenceData(const GenerateViewPointRequestReferenceData &) = default ;
    GenerateViewPointRequestReferenceData(GenerateViewPointRequestReferenceData &&) = default ;
    GenerateViewPointRequestReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateViewPointRequestReferenceData() = default ;
    GenerateViewPointRequestReferenceData& operator=(const GenerateViewPointRequestReferenceData &) = default ;
    GenerateViewPointRequestReferenceData& operator=(GenerateViewPointRequestReferenceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->miniDoc_ == nullptr; };
    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline GenerateViewPointRequestReferenceData& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline GenerateViewPointRequestReferenceData& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


  protected:
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

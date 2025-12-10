// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEINPUTSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEINPUTSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetNodeInputSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeInputSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputIndex, inputIndex_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeInputSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputIndex, inputIndex_);
    };
    GetNodeInputSchemaRequest() = default ;
    GetNodeInputSchemaRequest(const GetNodeInputSchemaRequest &) = default ;
    GetNodeInputSchemaRequest(GetNodeInputSchemaRequest &&) = default ;
    GetNodeInputSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeInputSchemaRequest() = default ;
    GetNodeInputSchemaRequest& operator=(const GetNodeInputSchemaRequest &) = default ;
    GetNodeInputSchemaRequest& operator=(GetNodeInputSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr
        && return this->inputIndex_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline GetNodeInputSchemaRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputIndex Field Functions 
    bool hasInputIndex() const { return this->inputIndex_ != nullptr;};
    void deleteInputIndex() { this->inputIndex_ = nullptr;};
    inline int32_t inputIndex() const { DARABONBA_PTR_GET_DEFAULT(inputIndex_, 0) };
    inline GetNodeInputSchemaRequest& setInputIndex(int32_t inputIndex) { DARABONBA_PTR_SET_VALUE(inputIndex_, inputIndex) };


  protected:
    std::shared_ptr<string> inputId_ = nullptr;
    std::shared_ptr<int32_t> inputIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

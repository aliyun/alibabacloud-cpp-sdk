// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetNodeOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutputIndex, outputIndex_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputIndex, outputIndex_);
    };
    GetNodeOutputRequest() = default ;
    GetNodeOutputRequest(const GetNodeOutputRequest &) = default ;
    GetNodeOutputRequest(GetNodeOutputRequest &&) = default ;
    GetNodeOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeOutputRequest() = default ;
    GetNodeOutputRequest& operator=(const GetNodeOutputRequest &) = default ;
    GetNodeOutputRequest& operator=(GetNodeOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputIndex_ == nullptr; };
    // outputIndex Field Functions 
    bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
    void deleteOutputIndex() { this->outputIndex_ = nullptr;};
    inline string outputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, "") };
    inline GetNodeOutputRequest& setOutputIndex(string outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


  protected:
    std::shared_ptr<string> outputIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

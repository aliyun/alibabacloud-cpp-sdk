// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODYLIBS_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODYLIBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecognitionLibsResponseBodyLibsLib.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionLibsResponseBodyLibs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionLibsResponseBodyLibs& obj) { 
      DARABONBA_PTR_TO_JSON(Lib, lib_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionLibsResponseBodyLibs& obj) { 
      DARABONBA_PTR_FROM_JSON(Lib, lib_);
    };
    ListRecognitionLibsResponseBodyLibs() = default ;
    ListRecognitionLibsResponseBodyLibs(const ListRecognitionLibsResponseBodyLibs &) = default ;
    ListRecognitionLibsResponseBodyLibs(ListRecognitionLibsResponseBodyLibs &&) = default ;
    ListRecognitionLibsResponseBodyLibs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionLibsResponseBodyLibs() = default ;
    ListRecognitionLibsResponseBodyLibs& operator=(const ListRecognitionLibsResponseBodyLibs &) = default ;
    ListRecognitionLibsResponseBodyLibs& operator=(ListRecognitionLibsResponseBodyLibs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lib_ != nullptr; };
    // lib Field Functions 
    bool hasLib() const { return this->lib_ != nullptr;};
    void deleteLib() { this->lib_ = nullptr;};
    inline const vector<Models::ListRecognitionLibsResponseBodyLibsLib> & lib() const { DARABONBA_PTR_GET_CONST(lib_, vector<Models::ListRecognitionLibsResponseBodyLibsLib>) };
    inline vector<Models::ListRecognitionLibsResponseBodyLibsLib> lib() { DARABONBA_PTR_GET(lib_, vector<Models::ListRecognitionLibsResponseBodyLibsLib>) };
    inline ListRecognitionLibsResponseBodyLibs& setLib(const vector<Models::ListRecognitionLibsResponseBodyLibsLib> & lib) { DARABONBA_PTR_SET_VALUE(lib_, lib) };
    inline ListRecognitionLibsResponseBodyLibs& setLib(vector<Models::ListRecognitionLibsResponseBodyLibsLib> && lib) { DARABONBA_PTR_SET_RVALUE(lib_, lib) };


  protected:
    std::shared_ptr<vector<Models::ListRecognitionLibsResponseBodyLibsLib>> lib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
